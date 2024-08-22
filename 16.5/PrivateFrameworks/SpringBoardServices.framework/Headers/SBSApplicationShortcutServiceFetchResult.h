// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSAPPLICATIONSHORTCUTSERVICEFETCHRESULT_H
#define SBSAPPLICATIONSHORTCUTSERVICEFETCHRESULT_H

@class NSArray, NSString;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying>



@property (readonly, nonatomic) NSArray *composedApplicationShortcutItems; // ivar: _composedApplicationShortcutItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems; // ivar: _dynamicApplicationShortcutItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems; // ivar: _staticApplicationShortcutItems
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStaticApplicationShortcutItems:(id)arg0 dynamicApplicationShortcutItems:(id)arg1 composedApplicationShortcutItems:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif