// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCLOUDSTORAGEGRAPHTABLEVIEWROW_H
#define ICQCLOUDSTORAGEGRAPHTABLEVIEWROW_H

@class RUITableViewRow, NSLock, UITableViewCell, ACAccount;



@interface ICQCloudStorageGraphTableViewRow : RUITableViewRow {
    NSLock *_tableCellLock;
    UITableViewCell *_tableCell;
    ACAccount *_account;
}




-(float)rowHeightWithMax:(float)arg0 peggedHeight:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)tableCell;


@end


#endif