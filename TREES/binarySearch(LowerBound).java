public static int binarySearch(int temp, int[] numOfShops, int start, int end){
        int index = (start+end)/2;
        if (start ==end) return start;
        if (temp > numOfShops[index] && temp< numOfShops[index]+1)
            return index+1;
        else if (temp > numOfShops[index])
            return binarySearch(temp, numOfShops, index+1, end);
        else if (temp < numOfShops[index])
            return binarySearch(temp, numOfShops,start, index);
        else
            return binarySearch(temp, numOfShops, index+1, end);
    }
