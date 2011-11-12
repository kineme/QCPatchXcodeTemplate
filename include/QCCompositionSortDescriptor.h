@interface QCCompositionSortDescriptor : NSSortDescriptor
+ (void)initialize;
+ (id)descriptor;
- (NSComparisonResult)compareObject:(id)lhs toObject:(id)rhs;
@end
