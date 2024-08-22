// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUICANDIDATEBASECELL_H
#define TUICANDIDATEBASECELL_H

@class UICollectionViewCell, UIImageView;
@protocol TUICandidateViewStyle;



@interface TUICandidateBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style


-(id)cellBackgroundColor;
-(id)cellBackgroundImage;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateBackground:(id)arg0 color:(id)arg1 ;
-(void)updateColors;


@end


#endif