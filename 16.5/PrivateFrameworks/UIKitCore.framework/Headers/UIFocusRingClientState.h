// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIFOCUSRINGCLIENTSTATE_H
#define UIFOCUSRINGCLIENTSTATE_H

@class NSMutableArray, NSMapTable, NSString;
@protocol UIFocusItem;

#import <Foundation/Foundation.h>


@interface UIFocusRingClientState : NSObject

@property (retain, nonatomic) NSMutableArray *activeFocusLayers; // ivar: _activeFocusLayers
@property (retain, nonatomic) NSMapTable *activeFocusLayersToItems; // ivar: _activeFocusLayersToItems
@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (weak, nonatomic) NSObject<UIFocusItem> *currentFocusItem; // ivar: _currentFocusItem


-(id)description;
-(id)initWithClientID:(id)arg0 ;


@end


#endif