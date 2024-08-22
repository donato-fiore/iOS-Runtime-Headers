// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBLUETOOTHTRIGGER_H
#define WFBLUETOOTHTRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices; // ivar: _selectedDevices
@property (nonatomic) NSUInteger selection; // ivar: _selection


+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif