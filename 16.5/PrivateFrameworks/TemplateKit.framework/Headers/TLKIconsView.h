// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKICONSVIEW_H
#define TLKICONSVIEW_H

@class NSMutableArray, UIFont;


#import "TLKStackView.h"

@interface TLKIconsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (nonatomic) NSUInteger prominence; // ivar: _prominence
@property (retain, nonatomic) UIFont *symbolFont; // ivar: _symbolFont


-(id)init;
-(void)updateIcons:(id)arg0 ;


@end


#endif