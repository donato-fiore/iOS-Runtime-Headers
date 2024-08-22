// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQXMLSPECIFICATION_H
#define _ICQXMLSPECIFICATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _ICQXMLSpecification : NSObject {
    NSDictionary *_placeholderInfo;
}




-(id)initWithPlaceholderInfo:(id)arg0 ;
-(id)placeholderReplacementsWithDeviceInfo:(id)arg0 ;
-(id)stringForPlaceholder:(id)arg0 ;
-(id)stringForPlaceholder:(id)arg0 withDeviceInfo:(id)arg1 ;


@end


#endif