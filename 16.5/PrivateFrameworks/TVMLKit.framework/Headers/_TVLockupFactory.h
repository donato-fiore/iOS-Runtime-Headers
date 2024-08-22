// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVLOCKUPFACTORY_H
#define _TVLOCKUPFACTORY_H


#import <Foundation/Foundation.h>


@interface _TVLockupFactory : NSObject



+(id)_configurationIdentifierForElement:(id)arg0 ;
+(struct TVCellMetrics )cellMetricsForCollectionElement:(id)arg0 ;
+(struct UIEdgeInsets )_customCellPaddingForCellMetrics:(struct TVCellMetrics )arg0 withCollectionCellMetrics:(struct TVCellMetrics )arg1 contentAlignment:(NSInteger)arg2 ;
+(void)_configureCell:(id)arg0 layout:(id)arg1 element:(id)arg2 ;
+(void)_configureStackingPoster:(id)arg0 layout:(id)arg1 element:(id)arg2 forMetrics:(BOOL)arg3 ;
+(void)_validateCellMetrics:(struct TVCellMetrics *)arg0 ;
+(void)updateViewLayoutForCell:(id)arg0 forSize:(struct CGSize )arg1 ;
-(id)init;
-(void)_registerLockup;


@end


#endif