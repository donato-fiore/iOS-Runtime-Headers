// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSELECTABLELISTOPTION_H
#define WFSELECTABLELISTOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFSelectableListOption : NSObject

@property (readonly, copy, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithDisplayTitle:(id)arg0 value:(id)arg1 ;


@end


#endif