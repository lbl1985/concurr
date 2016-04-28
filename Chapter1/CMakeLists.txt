set(list
	Q001_TwoSum.cpp
	Q021_Merge_Two_Sorted_Lists.cpp
	Q025_Reverse_Nodes_in_k_group.cpp
	Q045_JumpGameII.cpp
	Q051_N_Queens.cpp
	Q055_JumpGame.cpp
	Q058_LengthOfLastWord.cpp
	Q116_PopulatingNextRightPointersinEachNode.cpp
	Q130_SurroundedRegions.cpp
	Q149_Max_Points_on_a_line.cpp
	Q162_FindPeakElement.cpp
	Q324_WiggleSortII.cpp
	Q326_PowerOfThree.cpp
	Q328_OddEvenLinkedList.cpp
	Q329_LongestIncreasingPathInAMatrix.cpp
	Q331_verify_preorder_serialization_of_a_binary_tree.cpp
)

foreach(item ${list})
	list(APPEND CC150_LEETCODE_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/${item})
endforeach()

set(CC150_LEETCODE_SRCS ${CC150_LEETCODE_SRCS} PARENT_SCOPE)