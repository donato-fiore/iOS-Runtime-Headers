// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISYSTEMNAVIGATIONACTIONDESTINATIONCONTEXT_H
#define UISYSTEMNAVIGATIONACTIONDESTINATIONCONTEXT_H

@class NSURL, NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)systemNavigationActionContextWithTitle:(id)arg0 andURL:(id)arg1 ;
+(id)systemNavigationActionContextWithTitle:(id)arg0 bundleId:(id)arg1 ;
+(id)systemNavigationActionContextWithTitle:(id)arg0 sceneIdentifier:(id)arg1 ;
+(id)systemNavigationActionContextWithURL:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif