//
//  MasterViewController.h
//  TimeManager
//
//  Created by Tristan on 15/05/2014.
//  Copyright (c) 2014 Tristan Farneau. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
