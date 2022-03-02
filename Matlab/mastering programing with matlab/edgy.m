function edg=edgy(cc)
edg=zeros(size(cc));
cc=double(cc);
r=length(cc(:,1));
c=length(cc(1,:));
for j=1:c-2    
    for i=1:r-2
        A=cc(i:i+2,j:j+2);
        x=[-1 0 1;-2 0 2;-1 0 1];
        y=x';
        Sx=x.*A';Sx=sum(Sx(:));
        Sy=y.*A';Sy=sum(Sy(:));
        M=sqrt(Sy^2+Sx^2);
        edg(i,j)=M;
    end
end
edg=uint8(edg);