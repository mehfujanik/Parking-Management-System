#include<bits/stdc++.h>
#include<time.h>
#include<string>


using namespace std;


struct node
{
    string x;
    node *next;

};
node *head1=NULL,*head2=NULL,*head3=NULL, *tail1,*tail2,*tail3, *curr, *temp,*headb1=NULL,*headb2=NULL,*headb3=NULL,*tailb1,*tailb2,*tailb3;
int a1=0,a2=0,a3=0,aa=0,bb=0,cc=0, A1=0,A2=0,A3=0,AA=0,BB=0,CC=0;




void addcar()
{

    int x;
    string c;
    for(int i=0; ; i++)
    {
        srand (time(NULL));
        x= rand() % 3 + 1;

        if(a1==10&&a2==10&&a3==10){
        cout<<"Car parking Space Full\n"<<endl;
        break;
        }

        if(x==1)
        {
            if(a1<10)
            {
                a1++;
                cout<<"Enter The License Number\n";
                getline(cin,c);
                //   A[aa]=c;
                aa++;
                {

                    curr=new node();

                    curr->x=c;
                    if(head1==NULL)
                    {

                        head1=curr;
                        tail1=curr;
                    }
                    else
                    {

                        tail1->next=curr;
                        // curr->prv=tail;
                        tail1=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Car Parked at Parking Lot 1 : \n\nPosition:\n "<<endl;
                for(i=0; i<10; i++)
                {
                    if(i==aa-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }
                cout<<endl;
                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                break;
            }
            else
                continue;
        }
        if(x==2)
        {
            if(a2<10)
            {
                a2++;
                cout<<"Enter The License Number\n";
                getline(cin,c);
                // B[bb]=c;
                bb++;
                {

                    curr=new node();

                    curr->x=c;
                    if(head2==NULL)
                    {

                        head2=curr;
                        tail2=curr;
                    }
                    else
                    {

                        tail2->next=curr;
                        // curr->prv=tail;
                        tail2=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Car Parked at Parking Lot 2 : \n\nPosition:\n "<<endl;
                cout<<endl;
                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                for(i=0; i<10; i++)
                {
                    if(i==bb-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }

                cout<<endl;
                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                break;
            }
            else
                continue;
        }
        if(x==3)
        {
            if(a3<10)
            {
                a3++;
                cout<<"Enter The License Number\n";
                getline(cin,c);
                // C[cc]=c;
                cc++;
                {

                    curr=new node();

                    curr->x=c;
                    if(head3==NULL)
                    {

                        head3=curr;
                        tail3=curr;
                    }
                    else
                    {

                        tail3->next=curr;
                        // curr->prv=tail;
                        tail3=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Car Parked at Parking Lot 3 : \n\nPosition :\n"<<endl;

                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                for(i=0; i<10; i++)
                    cout<<"**\t";
                cout<<endl;
                for(i=0; i<10; i++)
                {
                    if(i==cc-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }

                cout<<endl;

                break;
            }
            else
                continue;
        }

    }
}


void addbike()
{

    int x;
    string c;
    for(int i=0; ; i++)
    {
        srand (time(NULL));
        x= rand() % 3 + 1;


        if(A1==5&&A2==5&&A3==5){
        cout<<"Bike parking Space Full\n"<<endl;
        break;
        }

        if(x==1)
        {
            if(A1<5)
            {
                A1++;
                cout<<"Enter The License Number\n";
                getline(cin,c);
                //   A[aa]=c;
                AA++;
                {

                    curr=new node();

                    curr->x=c;
                    if(headb1==NULL)
                    {

                        headb1=curr;
                        tailb1=curr;
                    }
                    else
                    {

                        tailb1->next=curr;

                        tailb1=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Bike Parked at Parking Lot 1 : \n\nPosition:\n "<<endl;
                for(i=0; i<5; i++)
                {
                    if(i==AA-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                break;
            }
            else
                continue;
        }
        if(x==2)
        {
            if(A2<5)
            {
                A2++;
                cout<<"Enter The License Number\n";
                getline(cin,c);
                // B[bb]=c;
                BB++;
                {

                    curr=new node();

                    curr->x=c;
                    if(headb2==NULL)
                    {

                        headb2=curr;
                        tailb2=curr;
                    }
                    else
                    {

                        tailb2->next=curr;
                        // curr->prv=tail;
                        tailb2=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Bike Parked at Parking Lot 2 : \n\nPosition:\n "<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                {
                    if(i==BB-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                break;
            }
            else
                continue;
        }
        if(x==3)
        {
            if(A3<5)
            {
                A3++;
                cout<<"Bike The License Number\n";
                getline(cin,c);
                // C[cc]=c;
                CC++;
                {

                    curr=new node();

                    curr->x=c;
                    if(headb3==NULL)
                    {

                        headb3=curr;
                        tailb3=curr;
                    }
                    else
                    {

                        tailb3->next=curr;
                        tailb3=curr;
                    }


                }
                system ( "cls" ) ;
                cout<<"Bike Parked at Parking Lot 3 : \n\nPosition :\n"<<endl;

                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                    cout<<"**\t";
                cout<<endl;
                cout<<endl;
                for(i=0; i<5; i++)
                {
                    if(i==CC-1)
                    {
                        cout<<c<<"\t";
                    }
                    else
                    {
                        cout<<"**\t";
                    }
                }
                cout<<endl;
                cout<<endl;

                break;
            }
            else
                continue;
        }

    }
}

void display()
{
    system ( "cls" ) ;
    cout<<"Parking Lots\n\n";

    int a=0,b=0,c=0,i;
    cout<<"Cars :\n";
    temp=head1;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        a++;

    }
    for(i=0; i<10-a; i++)
        cout<<"**\t";

    cout<<endl;
    temp=head2;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        b++;
    }
    for(i=0; i<10-b; i++)
        cout<<"**\t";

    cout<<endl;
    temp=head3;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        c++;

    }
    for(i=0; i<10-c; i++)
        cout<<"**\t";
    cout<<endl;

    int A=0,B=0,C=0;

    cout<<"\nBikes :\n";
    temp=headb1;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        A++;

    }
    for(i=0; i<5-A; i++)
        cout<<"**\t";

    cout<<endl;
    cout<<endl;
    temp=headb2;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        B++;
    }
    for(i=0; i<5-B; i++)
        cout<<"**\t";

    cout<<endl;
    cout<<endl;
    temp=headb3;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp=temp->next;
        C++;

    }
    for(i=0; i<5-C; i++)
        cout<<"**\t";
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

void checkoutc()
{
    node *temp,*pre;
    int a=0,b=0,c=0,i,A=0,B=0,C=0;
    system ( "cls" ) ;
    cout<<"Enter License Number\n";
    string l;
    cin>>l;
    cin.ignore();

    temp=head1;
    while(temp!=NULL)
    {
        a++;
        if(l==temp->x)
        {
            A++;
            break;
        }
        temp=temp->next;

    }
    temp=head2;
    while(temp!=NULL)
    {
        b++;
        if(l==temp->x)
        {
            B++;
            break;
        }
        temp=temp->next;

    }
    temp=head3;
    while(temp!=NULL)
    {
        c++;
        if(l==temp->x)
        {
            C++;
            break;
        }
        temp=temp->next;

    }

    if(A>0)
    {
        temp=head1;
        if(a == 1)
        {
            head1 = head1->next;

        }
        else
        {
            for(int i=1; i<a; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }

    }
    if(B>0)
    {
        temp=head2;
        if(b == 1)
        {
            head2 = head2->next;
        }
        else
        {
            for(int i=1; i<b; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }

    }
    if(C>0)
    {
        temp=head3;
        if(c == 1)
        {
            head3 = head3->next;
        }
        else
        {
            for(int i=1; i<c; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }


    }
    if(A==0&&B==0&&C==0)
        cout<<"Car Not Found\n";
    else
        cout<<"Checkout Successful, Parking position Shrinked \n";

}

void checkoutb()
{
    node *temp,*pre;
    int a=0,b=0,c=0,i,A=0,B=0,C=0;
    system ( "cls" ) ;
    cout<<"Enter License Number\n";
    string l;
    cin>>l;
    cin.ignore();

    temp=headb1;
    while(temp!=NULL)
    {
        a++;
        if(l==temp->x)
        {
            A++;
            break;
        }
        temp=temp->next;

    }
    temp=headb2;
    while(temp!=NULL)
    {
        b++;
        if(l==temp->x)
        {
            B++;
            break;
        }
        temp=temp->next;

    }
    temp=headb3;
    while(temp!=NULL)
    {
        c++;
        if(l==temp->x)
        {
            C++;
            break;
        }
        temp=temp->next;

    }

    if(A>0)
    {
        temp=headb1;
        if(a == 1)
        {
            headb1 = headb1->next;

        }
        else
        {
            for(int i=1; i<a; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }

    }
    if(B>0)
    {
        temp=headb2;
        if(b == 1)
        {
            headb2 = headb2->next;
        }
        else
        {
            for(int i=1; i<b; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }

    }
    if(C>0)
    {
        temp=headb3;
        if(c == 1)
        {
            headb3 = headb3->next;
        }
        else
        {
            for(int i=1; i<c; i++)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = temp->next;
            free(temp);
        }


    }
    if(A==0&&B==0&&C==0)
        cout<<"Bike Not Found\n";
    else
        cout<<"Checkout Successful, Parking position Shrinked \n";

}

void Searchcar()
{
    system ( "cls" ) ;
    cout<<"Enter License Number\n";
    string l;
    int a=0,b=0,c=0,A=0,B=0,C=0,i;
    cin>>l;
    cin.ignore();

    temp=head1;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            a++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        A++;

    }
    for(i=0; i<10-A; i++)
        cout<<"**\t";

    cout<<endl;
    temp=head2;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            b++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        B++;
    }
    for(i=0; i<10-B; i++)
        cout<<"**\t";

    cout<<endl;
    temp=head3;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            c++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        C++;

    }
    for(i=0; i<10-C; i++)
        cout<<"**\t";
    cout<<endl;
    if(a==1)
        cout<<"Vehicle Found . Parked at Car Parking lot 1\n\n";
    if(b==1)
        cout<<"Vehicle Found . Parked at Car Parking lot 2\n\n";
    if(c==1)
        cout<<"Vehicle Found . Parked at Car Parking lot 3\n\n";
    if(a==0&&b==0&&c==0)
        cout<<"Vehicle not found\n";

}

void Searchbike()
{
    system ( "cls" ) ;
    cout<<"Enter License Number\n";
    string l;
    int a=0,b=0,c=0,A=0,B=0,C=0,i;
    cin>>l;
    cin.ignore();

    temp=headb1;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            a++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        A++;

    }
    for(i=0; i<5-A; i++)
        cout<<"**\t";

    cout<<endl;
    temp=headb2;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            b++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        B++;
    }
    for(i=0; i<5-B; i++)
        cout<<"**\t";

    cout<<endl;
    temp=headb3;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            cout<<temp->x<<"\t";
            c++;
        }
        else
            cout<<"**\t";
        temp=temp->next;
        C++;

    }
    for(i=0; i<5-C; i++)
        cout<<"**\t";
    cout<<endl;
    if(a==1)
        cout<<"Vehicle Found . Parked at Bikes Parking lot 1\n\n";
    if(b==1)
        cout<<"Vehicle Found . Parked at Bikes Parking lot 2\n\n";
    if(c==1)
        cout<<"Vehicle Found . Parked at Bikes Parking lot 3\n\n";
    if(a==0&&b==0&&c==0)
        cout<<"Vehicle not found\n";

}

int main()
{
    int n,m,o,i,j,p;
    cout<<"\t\t\tVehicle Parking System\n\n";
    cout<<"Cars :\n\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            cout<<"**\t";

        }
        cout<<endl;
    }
    cout<<"Bikes :\n\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<"**\t";

        }
        cout<<endl;
        //cout<<endl;
    }
    cout<<endl;
    // cout<<endl;
    while(1)
    {
        cout<<"\n\n1. Check In\n2. Check Out\n3. Show all Vehicles\n4. Search Vehicles\n5. Exit\n";
        cin>>n;
        cin.ignore();
        if(n==1)
        {
            cout<<"\n1.Car\n2.Bike\n";
            cin>>m;
            cin.ignore();
            if(m==1)
                addcar();
            if(m==2)
                addbike();
        }
        if(n==2)
        {
            cout<<"\n1.Car\n2.Bike\n";
            cin>>p;
            cin.ignore();
            if(p==1)
                checkoutc();
            if(p==2)
                checkoutb();

        }

        if(n==3)
            display();
        if(n==4)
        {
            cout<<"\n1.Car\n2.Bike\n";
            cin>>o;
            cin.ignore();
            if(o==1)
                Searchcar();
            if(o==2)
                Searchbike();

        }
        if(n==5)
            return 0;

    }

}
