#define P_NORMAL 5

#include<stdio.h>
#include<stdlib.h>
int PID=1;
int Start_Time=0;
int End=0;
int Wait=0;
int Total_Wait=0;

typedef struct a
{
    int pid, priority;
    int bTime, aTime, wTime, eTime;
    struct a *next, *prev;

} PCB;
typedef struct
{
    PCB *head, *tail;
} Queue;

void printList(Queue *q)
{
    PCB *pn = q->head;
    while(pn!=0)
    {
        printf("PID\t BURST\t ARRIVAL\t WAITING\t ENDS\t ADDRESS\t\n");
        while(pn!=0)
        {
            printf("%d\t %d\t %d\t\t %d\t\t %d\t %d\n", pn->pid, pn->bTime,pn->aTime, pn->wTime,pn->eTime, pn);
            pn = pn->next;
        }
    }
}
PCB* insertInList(Queue *q, int burst, int priority)
{
    PCB *loc = q->head;
    PCB *newProcess = (PCB *)malloc(sizeof(PCB));

    newProcess->next = newProcess->prev = 0;
    newProcess->pid = PID++;
    newProcess->bTime =burst;
    newProcess->aTime = 0;

    newProcess->wTime = -1;
    newProcess->eTime = -1;

    while(loc!=0)
    {
        if(burst<loc->bTime)
            break;
        else
            loc = loc->next;
    }

    if(q->head==0)
    {
        q->head=q->tail=newProcess;
    }
    else if(loc==q->head)
    {
        newProcess->next = q->head;
        q->head->prev = newProcess;
        q->head=newProcess;
    }

    else if(loc == 0)
    {
        q->tail->next = newProcess;
        newProcess->prev = q->tail;
        q->tail=newProcess;

    }

    else
    {
        newProcess->next = loc;
        newProcess->prev = loc->prev;
        loc->prev->next = newProcess;
        loc->prev = newProcess;

    }


}
execute(Queue *q)
{
    PCB *ps=q->head;
    printf("PID\t BURST\t ARRIVAL\t WAITING\t ENDS\t ADDRESS\t\n");
    while(ps!=0)
    {
        End = Start_Time+(ps->bTime);
        Wait=Start_Time-(ps->aTime);

        Total_Wait+=Wait;
        Start_Time+=ps->bTime;
        printf("%d\t %d\t %d\t\t %d\t\t %d\t %d\n", ps->pid, ps->bTime,ps->aTime, Wait,End, ps);
            ps = ps->next;

    }

    printf("\nAverage waiting time: %f\n",(float)Total_Wait/(PID-1));
}

int main()
{
    Queue *readyQ = (Queue *)malloc(sizeof(Queue));
    readyQ->head=readyQ->tail=0;


    insertInList(readyQ, 10, P_NORMAL);
    insertInList(readyQ, 5, P_NORMAL);
    insertInList(readyQ, 15, P_NORMAL);
    insertInList(readyQ, 8, P_NORMAL);
    insertInList(readyQ, 6, P_NORMAL);
    printList(readyQ);
    printf("\n\n");
    execute(readyQ);
    return 0;
}
