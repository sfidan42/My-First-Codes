function distance=get_distance(c1,c2)
[data , headings] = xlsread('Distances.xlsx');
for i=1:length(headings(1,:))
    if headings{1,i}==c1
        colloc=i;
        break
    else
        continue
    end
end
for i=1:length(headings(:,1))
    if headings{1,i}==c2
        rowloc=i;
        break
    else
        continue
    end
end
distance=data{rowloc-1,colloc-1};