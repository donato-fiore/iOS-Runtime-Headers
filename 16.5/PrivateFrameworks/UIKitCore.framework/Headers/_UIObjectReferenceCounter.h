// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOBJECTREFERENCECOUNTER_H
#define _UIOBJECTREFERENCECOUNTER_H

@class NSCountedSet;

#import <Foundation/Foundation.h>


@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet *_objectReferences;
}




-(id)allObjects;
-(id)init;
-(void)decrementReferenceForObject:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)incrementReferenceForObject:(id)arg0 ;


@end


#endif