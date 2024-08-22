// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUSCANOVERLAY_H
#define VMUSCANOVERLAY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VMUScanOverlay : NSObject

@property (readonly, nonatomic) NSArray *refinementRules; // ivar: _rules


+(BOOL)foundationHasNSSliceMemoryOptimization;
+(id)defaultOverlay;
+(id)defaultOverlayWithScanner:(id)arg0 ;
-(id)initWithScanner:(id)arg0 ;
-(void)addMetadataRefinementRule:(id)arg0 ;


@end


#endif