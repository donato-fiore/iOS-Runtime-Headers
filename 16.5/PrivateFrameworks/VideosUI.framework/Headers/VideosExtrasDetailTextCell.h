// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASDETAILTEXTCELL_H
#define VIDEOSEXTRASDETAILTEXTCELL_H

@class UICollectionViewCell, UILabel;



@interface VideosExtrasDetailTextCell : UICollectionViewCell {
    UILabel *_label;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicTypeDidChange;
-(void)configureForTextElement:(id)arg0 style:(id)arg1 ;
-(void)dealloc;


@end


#endif