[~,~,e]=xlsread('Distances.xlsx');
c1='Seattle, WA';
c2='Miami, FL';
for i=1:length(e(1,:))
    try
        if strcmp(c2,char(e(1,i)))
            a=i;
            break
        else
            continue
        end
    end
end
for i=1:length(e(:,1))
    try
        if strcmp(c1,char(e(i,1)))
            b=i;
            break
        else
            continue
        end 
    end
end
try
    distance=e(a,b);
catch
    distance=-1;
end