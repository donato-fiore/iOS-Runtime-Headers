// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIOUTLINEMENUCOLLECTIONVIEWCELL_H
#define VUIOUTLINEMENUCOLLECTIONVIEWCELL_H

@class UICollectionViewOutlineCell, NSString;



@interface VUIOutlineMenuCollectionViewCell : UICollectionViewOutlineCell

@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL shouldAppearAsHeader; // ivar: _shouldAppearAsHeader
@property (retain, nonatomic) NSString *title; // ivar: _title


-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)prepareForReuse;


@end


#endif