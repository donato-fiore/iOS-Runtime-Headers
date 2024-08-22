// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACTIONSHARESHEET_H
#define VUIACTIONSHARESHEET_H

@class NSDictionary, NSString, NSURL, UIView;


#import "VUIAction.h"

@interface VUIActionShareSheet : VUIAction

@property (retain, nonatomic) NSDictionary *groupActivityMetadata; // ivar: _groupActivityMetadata
@property (retain, nonatomic) NSString *imageURLStr; // ivar: _imageURLStr
@property (retain, nonatomic) NSString *sharedWatchId; // ivar: _sharedWatchId
@property (retain, nonatomic) NSURL *sharedWatchUrl; // ivar: _sharedWatchUrl
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


-(id)initWithContextData:(id)arg0 sourceView:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif