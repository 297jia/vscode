void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2size, int n)
{	
int l1=m-1;
int l2=n-1;
int l3=n+m-1;
while(l1>=0&&12>=0)
    {
 	   if(nums1[l1]>nums2[l2])	
    {
 	   nums1[l3]=nums1[l1];	
 	   l1--;	
 	   l1--;	
    }
 	else	
    {
 	   nums1[l3]=nums2[l2];	
 	   l3--;	
 	   l2--;	
 	}	
    }
 	   while(l2>=0)	
 	{	
 	   nums1[l3]=nums2[l2];	
 	   l2--;	
 	   l3--;	
    }
}