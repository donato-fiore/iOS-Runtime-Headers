// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEVICEATTRIBUTESRESOURCE_H
#define WFDEVICEATTRIBUTESRESOURCE_H

@class NSArray;


#import "WFResource.h"

@interface WFDeviceAttributesResource : WFResource

@property (readonly, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property (readonly, nonatomic) NSArray *requiredDeviceIdioms; // ivar: _requiredDeviceIdioms


+(BOOL)mustBeAvailableForDisplay;
-(id)initWithDefinition:(id)arg0 ;
-(void)refreshAvailability;


@end


#endif