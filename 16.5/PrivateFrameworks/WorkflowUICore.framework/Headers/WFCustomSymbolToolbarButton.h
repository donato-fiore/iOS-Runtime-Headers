// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCUSTOMSYMBOLTOOLBARBUTTON_H
#define WFCUSTOMSYMBOLTOOLBARBUTTON_H

@class UIButton, NSString;



@interface WFCustomSymbolToolbarButton : UIButton

@property (nonatomic) CGFloat pointSizeToWidthRatio; // ivar: _pointSizeToWidthRatio
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImage;


@end


#endif