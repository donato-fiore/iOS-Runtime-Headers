// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLECONSTANTS_WATCH_H
#define UITABLECONSTANTS_WATCH_H

@class Phone;



@interface UITableConstants_Watch : Phone



+(id)sharedConstants;
-(BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(NSInteger)arg0 ;
-(NSInteger)defaultHeaderFooterPinningBehaviorForTableStyle:(NSInteger)arg0 ;
-(id)defaultCheckmarkImageForCell:(id)arg0 ;
-(struct _UITableConstantsBackgroundProperties )defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(NSInteger)arg0 cellConfigurationState:(id)arg1 traitCollection:(id)arg2 floating:(BOOL)arg3 ;


@end


#endif