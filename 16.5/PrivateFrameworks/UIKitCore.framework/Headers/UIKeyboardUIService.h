// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDUISERVICE_H
#define UIKEYBOARDUISERVICE_H

@class BSServiceConnectionListener, CAContext, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UIKeyboardUIService : NSObject <BSServiceConnectionListenerDelegate>

 {
    BSServiceConnectionListener *_bsConnectionlistener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CAContext *_context;
    NSMutableArray *_slots;
}


@property (readonly, nonatomic) CAContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceInterface;
+(id)sharedService;
-(id)init;
-(int)createSlot:(struct CGSize )arg0 ;
-(void)clearSlots;
-(void)createContext;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif