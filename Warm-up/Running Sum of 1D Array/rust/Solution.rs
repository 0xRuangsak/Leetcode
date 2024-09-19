struct Solution;

impl Solution {
    pub fn running_sum(nums: &mut Vec<i32>) -> Vec<i32> {
        for i in 1..nums.len() {
            nums[i] += nums[i - 1];
        }
        nums.to_vec()
    }
}

fn main() {
    let mut nums = vec![1, 2, 3, 4];
    let result = Solution::running_sum(&mut nums);
    println!("{:?}", result);
}
