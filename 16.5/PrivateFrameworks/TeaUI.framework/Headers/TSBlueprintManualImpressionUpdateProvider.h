// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSBLUEPRINTMANUALIMPRESSIONUPDATEPROVIDER_H
#define TSBLUEPRINTMANUALIMPRESSIONUPDATEPROVIDER_H


#import <Foundation/Foundation.h>


@interface TSBlueprintManualImpressionUpdateProvider : NSObject {
    ? updateImpressionsBlocks;
    ? endImpressionsBlocks;
    ? visibleViewAccessor;
    ? visibleRectAccessor;
}




-(id)init;
-(void)endImpressions;
// -(void)setVisibileViewAccessor:(id)arg0 visibleRectAccessor:(unk)arg1  ;
-(void)updateImpressionsForView:(id)arg0 withVisibleRect:(struct CGRect )arg1 ;


@end


#endif