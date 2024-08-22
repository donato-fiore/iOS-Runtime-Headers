// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIONAVIGATIONBARTITLERENAMERVIEWMETRICSUPDATEACTIONRESPONSE_H
#define _UIONAVIGATIONBARTITLERENAMERVIEWMETRICSUPDATEACTIONRESPONSE_H

@class BSActionResponse;



@interface _UIONavigationBarTitleRenamerViewMetricsUpdateActionResponse : BSActionResponse

@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) CGFloat horizontalTextInset;
@property (readonly, nonatomic) CGSize intrinsicContentSize;
@property (readonly, nonatomic) unsigned int sourceContextId;
@property (readonly, nonatomic) NSUInteger sourceLayerRenderId;


-(id)initWithRenderID:(NSUInteger)arg0 contextID:(unsigned int)arg1 intrinsicContentSize:(struct CGSize )arg2 bounds:(struct CGRect )arg3 horizontalTextInset:(CGFloat)arg4 ;


@end


#endif