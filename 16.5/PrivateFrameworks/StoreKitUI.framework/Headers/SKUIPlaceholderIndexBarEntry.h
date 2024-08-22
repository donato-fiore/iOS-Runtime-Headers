// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPLACEHOLDERINDEXBARENTRY_H
#define SKUIPLACEHOLDERINDEXBARENTRY_H



#import "SKUIIndexBarEntry.h"

@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry

@property (readonly, nonatomic) CGSize placeholderSize; // ivar: _placeholderSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPlaceholderSize:(struct CGSize )arg0 ;
-(struct CGSize )_calculatedContentSize;


@end


#endif