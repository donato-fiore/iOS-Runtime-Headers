// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUCELL_H
#define _UICONTEXTMENUCELL_H



#import "UICollectionViewCell.h"
#import "_UIContextMenuCellContentView.h"

@interface _UIContextMenuCell : UICollectionViewCell

@property (readonly, nonatomic) _UIContextMenuCellContentView *actionView;


+(BOOL)_isInternalCell;
+(BOOL)_wantsLegacyMenuGesture;
+(Class)_contentViewClass;
-(BOOL)_wantsKeyCommandsWhenDeferred;
-(NSInteger)_focusItemDeferralMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif