// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLIFTUICONTROLLER_H
#define ICQLIFTUICONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICQLiftUIController : NSObject {
    ? presenter;
    ? store;
}




-(id)init;
-(id)makeLiftUIViewControllerWithURL:(id)arg0 dataSource:(id)arg1 presenter:(id)arg2 data:(id)arg3 ;
-(void)updateStoreDataForKey:(id)arg0 value:(id)arg1 ;


@end


#endif