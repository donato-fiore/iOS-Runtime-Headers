// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSHOWBACKLINKINDICATORCOMMAND_H
#define SYSHOWBACKLINKINDICATORCOMMAND_H

@class NSString;
@protocol SYShowBacklinkIndicatorCommandImpl;

#import <Foundation/Foundation.h>


@interface SYShowBacklinkIndicatorCommand : NSObject <SYShowBacklinkIndicatorCommandImpl>



@property (retain, nonatomic) NSObject<SYShowBacklinkIndicatorCommandImpl> *_impl; // ivar: __impl
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 ;
-(void)invalidate;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif