@import Foundation;
@import ObjectiveC;

@class NSString;

@interface SBElementArray : NSArray
- (id)objectWithName:(NSString *)name;
@end

@interface SBHive
@property (readonly) __attribute__((iboutletcollection(B))) SBElementArray *bees;
@end
