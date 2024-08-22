// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYAPPLICATION_H
#define TRANSPARENCYAPPLICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TransparencyApplication : NSObject

@property (retain) NSString *applicationIdentifier; // ivar: _applicationIdentifier


+(id)addApplicationPrefixForIdentifier:(id)arg0 uri:(id)arg1 ;
+(id)applicationIdentifierForValue:(id)arg0 ;
+(id)applicationPrefixForIdentifier:(id)arg0 ;
+(id)applicationValueForIdentifier:(id)arg0 ;
+(id)stripApplicationPrefixForIdentifier:(id)arg0 uri:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif