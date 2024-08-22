// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSECURETEXTTABLEVIEWCELL_H
#define WFSECURETEXTTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIFont;



@interface WFSecureTextTableViewCell : UITableViewCell

@property (copy, nonatomic) NSString *credentials; // ivar: _credentials
@property (nonatomic) BOOL hideSecureText; // ivar: _hideSecureText
@property (copy, nonatomic) UIFont *placeholderFont; // ivar: _placeholderFont


-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif