#include <stdio.h>
struct shapes{
    int id;
    char s;
    double d,h,w;
};


int main(){
    struct shapes shape_array[100];
    int a,i=0,j,r=0,c=0;
    double ra = 0,ca = 0,ta = 0,p1,p2;
    printf("1.Add a circle\n2.Add a rectangle\n3.List items\n4.Statistics\n5.Exit\n");
    while (1){
        printf("\nPlease enter a key:");
        scanf("%d",&a);
        if(a == 1){
            printf("Circle Input:\n");
            shape_array[i].id = i+1;
            shape_array[i].s = 'C';
            printf("What is the diameter:");
            scanf("%lf",&shape_array[i].d);
            ca += 3.1416 * shape_array[i].d * shape_array[i].d * 0.25;
            ta += 3.1416 * shape_array[i].d * shape_array[i].d * 0.25;
            c++;
            i++;
        }
        else if(a == 2){
            printf("Rectangle Input:\n");
            shape_array[i].id = i+1;
            shape_array[i].s = 'R';
            printf("What is the height:");
            scanf("%lf",&shape_array[i].h);
            printf("What is the weight:");
            scanf("%lf",&shape_array[i].w);
            ra += 0.5 * shape_array[i].h * shape_array[i].w;
            ta += 0.5 * shape_array[i].h * shape_array[i].w;;
            r++;
            i++;
        }
        else if(a == 3){
            printf("\nListings:\n");
            printf("Id   	type	dimension\n");
            printf("=============================\n");
            for(j = 0;j<i;j++){
                if(shape_array[j].s == 'C'){
                printf("%d.   Circle	%0.2lf\n",shape_array[j].id,shape_array[j].d);
                }
                else{
                    printf("%d.  Rectangle   %0.2lf X %0.2lf\n",shape_array[j].id,shape_array[j].h,shape_array[j].w);
                }

            }


        }
        else if(a==4){
            printf("\nStatistics:\n");
            p1 = ra/ta*100;
            p2 = ca/ta*100;
            printf("Total shapes : %d\n",r+c);
            printf("Total number of Rectangles : %d\n",r);
            printf("Total number of Circles : %d\n",c);
            printf("Total area: %0.2lf\n",ta);
            printf("The total area occupied by rectangles: %0.2lf (%0.2lf %%)\n",ra,p1);
            printf("The total area occupied by circles:  %0.2lf  (%0.2lf %%) \n",ca,p2);
        }
        else{
            break;
        }

    }
    return 0;
}
