// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVORGANIZERCELLVIEW_H
#define _TVORGANIZERCELLVIEW_H

@class UIView, NSArray;



@interface _TVOrganizerCellView : UIView

@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (nonatomic) NSInteger contentVerticalAlignment; // ivar: _contentVerticalAlignment
@property (readonly, copy, nonatomic) NSArray *filteredComponents; // ivar: _filteredComponents


-(BOOL)canBecomeFocused;
-(NSInteger)_alignmentFromView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFitsComponents:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetSubviews;
-(void)_updateView:(id)arg0 maxViewWidth:(CGFloat)arg1 ;
-(void)_verticallyStackComponents:(id)arg0 alignment:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif