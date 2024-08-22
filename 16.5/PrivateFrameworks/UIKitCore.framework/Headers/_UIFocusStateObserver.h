// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSSTATEOBSERVER_H
#define _UIFOCUSSTATEOBSERVER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _UIFocusStateObserver : NSObject {
    NSMapTable *_observers;
    ? _flags;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;


-(id)addObserver:(id)arg0 ;
-(id)description;
-(id)descriptionBuilder;
-(id)init;
-(void)notifyObserversIfNecessary;
-(void)removeObserver:(id)arg0 ;


@end


#endif