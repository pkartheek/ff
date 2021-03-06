//
//  ViewController.h
//  Proficiency exercise
//
//  Created by Kartheek P. on 23/11/15.
//  Copyright (c) 2015 Kartheek P. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *mArrayRecord;
    NSMutableDictionary *mImageDownloadsInProgress;
    UIRefreshControl  *refreshControl;
    UITableView *mTableView;
    NSCache *mImageCache;
}
@property (nonatomic,strong) NSMutableDictionary *mImageDownloadsInProgress;
@end

