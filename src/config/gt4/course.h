

























function getCourseID(code)
{
    return CourseTable.bsearch(code);
}

function getCourseCode(id)
{
    return CourseTable[id];
}