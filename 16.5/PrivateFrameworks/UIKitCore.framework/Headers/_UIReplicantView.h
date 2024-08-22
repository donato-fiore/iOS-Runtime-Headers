// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREPLICANTVIEW_H
#define _UIREPLICANTVIEW_H



#import "UIView.h"
#import "_UIReplicantLayer.h"

@interface _UIReplicantView : UIView

@property (readonly, nonatomic) _UIReplicantLayer *_layer;


+(Class)layerClass;
-(id)initAsCopyOf:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSurface:(struct _UIRenderingSurface *)arg0 ;


@end


#endif