// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDLINEENDVIEW_H
#define TSDLINEENDVIEW_H

@class UIView;


#import "TSDLineEnd.h"

@interface TSDLineEndView : UIView

@property (retain, nonatomic) TSDLineEnd *lineEnd; // ivar: mLineEnd
@property (nonatomic) BOOL onRight; // ivar: mOnRight


+(id)viewWithLineEnd:(id)arg0 onRight:(BOOL)arg1 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif