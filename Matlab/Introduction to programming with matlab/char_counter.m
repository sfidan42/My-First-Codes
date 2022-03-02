function charnum=char_counter(fname,character)

fid=fopen(fname,'rt');
charnum=0;
if fid<0
    error("error opening file");
end
line=fgets(fid);
fprintf(line);
for i=1:length(line)
    if line(i)==character
        charnum=charnum+1;
    else
        continue
    end
end

if charnum==0
    charnum=-1;
end
fprintf(char(10));
fclose(fid);
