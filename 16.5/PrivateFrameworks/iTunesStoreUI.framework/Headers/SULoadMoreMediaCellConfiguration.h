// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SULOADMOREMEDIACELLCONFIGURATION_H
#define SULOADMOREMEDIACELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration

@property (nonatomic) CGFloat previousCellHeight; // ivar: _previousCellHeight


+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif