//
//  DetailViewController.h
//  TimeManager
//
//  Created by Tristan on 15/05/2014.
//  Copyright (c) 2014 Tristan Farneau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
