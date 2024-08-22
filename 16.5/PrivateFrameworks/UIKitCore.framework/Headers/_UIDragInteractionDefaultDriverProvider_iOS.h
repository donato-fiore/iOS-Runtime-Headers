// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRAGINTERACTIONDEFAULTDRIVERPROVIDER_IOS_H
#define _UIDRAGINTERACTIONDEFAULTDRIVERPROVIDER_IOS_H

@class NSString;
@protocol _UIDragInteractionDefaultDriverProvider;

#import <Foundation/Foundation.h>


@interface _UIDragInteractionDefaultDriverProvider_iOS : NSObject <_UIDragInteractionDefaultDriverProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDefaultDriversForDragInteraction:(id)arg0 ;


@end


#endif