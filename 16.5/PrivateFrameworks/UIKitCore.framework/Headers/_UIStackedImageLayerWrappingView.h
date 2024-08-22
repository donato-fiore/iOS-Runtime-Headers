// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTACKEDIMAGELAYERWRAPPINGVIEW_H
#define _UISTACKEDIMAGELAYERWRAPPINGVIEW_H

@protocol CALayerDelegate;


#import "UIView.h"

@interface _UIStackedImageLayerWrappingView : UIView

@property (weak, nonatomic) NSObject<CALayerDelegate> *actionDelegate; // ivar: _actionDelegate


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;


@end


#endif