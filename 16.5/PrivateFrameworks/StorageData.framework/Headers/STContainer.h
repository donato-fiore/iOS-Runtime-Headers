// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCONTAINER_H
#define STCONTAINER_H

@class NSString, NSURL;
@protocol STContainer;

#import <Foundation/Foundation.h>


@interface STContainer : NSObject <STContainer>

 {
    *container_object_s _container;
}


@property (readonly) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly) NSURL *url; // ivar: _url


+(id)containerWithIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 personaUniqueString:(id)arg2 ;
+(id)containersWithClass:(NSUInteger)arg0 personaUniqueString:(id)arg1 ;
-(NSUInteger)diskUsageWithError:(*id)arg0 ;
-(id)initWithLibsystemContainer:(struct container_object_s *)arg0 ;
-(void)dealloc;


@end


#endif