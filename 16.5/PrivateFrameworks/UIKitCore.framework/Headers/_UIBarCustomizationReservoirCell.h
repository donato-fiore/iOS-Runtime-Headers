// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZATIONRESERVOIRCELL_H
#define _UIBARCUSTOMIZATIONRESERVOIRCELL_H



#import "UICollectionViewCell.h"
#import "_UIBarCustomizationChiclet.h"

@interface _UIBarCustomizationReservoirCell : UICollectionViewCell

@property (retain, nonatomic) _UIBarCustomizationChiclet *chiclet; // ivar: _chiclet


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif